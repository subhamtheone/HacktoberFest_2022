var db = null // global variable to hold the connection

MongoClient.connect('mongodb://localhost:27017/', function(err, client) {
    if(err) { console.error(err) }
    db = client.db('test') // once connected, assign the connection to the global variable
})

app.get('/', function(req, res) {
    db.collection('test').find({}).toArray(function(err, docs) {
        if(err) { console.error(err) }
        res.send(JSON.stringify(docs))
    })
})


var conn = MongoClient.connect('mongodb://localhost:27017/') // returns a Promise

app.get('/', function(req, res) {
    conn.then(client=> client.db('test').collection('test').find({}).toArray(function(err, docs) {
        if(err) { console.error(err) }
        res.send(JSON.stringify(docs))
    }))
})


