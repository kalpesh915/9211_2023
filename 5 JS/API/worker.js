function getCurrentTime(){
    postMessage(new Date());
    setInterval("getCurrentTime()", 1000);
}

getCurrentTime();