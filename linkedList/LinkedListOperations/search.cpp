Node* SLL:search(string sKey){
	Node* crawler = head;
	while(crawler!=nullptr && and crawler->name!=sKey){
		crawler = crawler->next;
	}
	if(crawler == nullptr){
		return nullptr;
	} else {
		return crawler;
	}
}
