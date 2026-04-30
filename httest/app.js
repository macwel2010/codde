const fet = fetch("./data.json");

fet.then(response => {
    response.json();
    console.log(response.json());
}).then(dat => console.log(dat))