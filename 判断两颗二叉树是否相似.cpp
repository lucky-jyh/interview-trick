//�ݹ�ķ���
bool is_similar(BiTree t1, BiTree t2) {
	if (t1 == nullptr && t2 == nullptr) //��������Ϊ��
		return true;
	else if (t1 == nullptr || t2 == nullptr)  //ֻ��һ����Ϊ��
		return false;
	else { //�ݹ�ؽ����ж�
		l_b = is_similiar(t1->left, t2->left);
		r_b = is_similiar(t1->right, t2->right);
		return l_b && r_b;
	}
}

//�ǵݹ�ķ���
�ǵݹ�Ľⷨ������ͬ���ķǵݹ�ı���������������ǰ�����򡢺��򡢷ֲ㶼�У������Ƿ������Ϊһ�¡�