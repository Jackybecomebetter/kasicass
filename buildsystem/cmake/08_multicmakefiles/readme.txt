ADD_SUBDIRECTORY(source_dir [binary_dir] [EXCLUDE_FROM_ALL])
���ָ��������ǰ������Ӵ��Դ�ļ�����Ŀ¼��������ָ���м�����ƺ�Ŀ������ƴ�
�ŵ�λ�á�EXCLUDE_FROM_ALL�����ĺ����ǽ����Ŀ¼�ӱ���������ų������磬����
��example�����ܾ���Ҫ���̹�����ɺ��ٽ���exampleĿ¼�������й���(��Ȼ����
Ҳ����ͨ�����������������������)��

��������Ӷ����˽�src��Ŀ¼���빤�̣���ָ���������(���������м���)·��Ϊ
binĿ¼�����������binĿ¼��ָ������ô������(�����м���)���������
build/srcĿ¼(���Ŀ¼��ԭ�е�srcĿ¼��Ӧ)��ָ��binĿ¼���൱���ڱ���ʱ
��src������Ϊbin�����е��м�����Ŀ������ƶ��������binĿ¼��

�����ط�����Ŀ�������
������SUBDIRS����ADD_SUBDIRECTORYָ��(�����Ƿ�ָ���������Ŀ¼)�����Ƕ���
��ͨ��SETָ�����¶���EXECUTABLE_OUTPUT_PATH��LIBRARY_OUTPUT_PATH����
��ָ�����յ�Ŀ������Ƶ�λ��(ָ�������ɵ�hello�������յĹ���⣬��������������
���м��ļ�)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

