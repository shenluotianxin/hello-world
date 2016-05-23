void union(List &La,List Lb){
	La_Len=ListLength(La);//求线性表长
	Lb_len=ListLength(Lb);
		for(i=1;i<=Lb_len;i++){
			GetElem(Lb,i,e);//取LB中第i个元素赋值给e
		if(!LocateElem(La,e,equal()))
			ListInsert(La,++La_len,e);
			//La中不存在和e相同的数据元素，则插入之
		}
	}//把la变为la lb的合集
