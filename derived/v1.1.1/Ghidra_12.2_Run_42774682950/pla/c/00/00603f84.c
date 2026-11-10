/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00603f84; name: FUN_00603f84
 */


void FUN_00603f84(long *param_1,byte *param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *__src;
  ulong __n;
  void *__dest;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04375238 + 0x10;
  param_1[1] = (long)(PTR_DAT_04375240 + 0x10);
  *param_1 = (long)puVar1;
  puVar1 = PTR_DAT_043734b0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = (long)(puVar1 + 0x10);
  puVar2 = PTR_DAT_043734b8;
  puVar1 = PTR_DAT_04373140;
  plVar3 = *(long **)PTR_DAT_043734b8;
  if (plVar3 == (long *)0x0) {
                    /* try { // try from 00604128 to 0060413f has its CatchHandler @ 006041d8 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,
               "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
               ,"external/com_google_grpc_base/include\\grpcpp/impl/codegen/grpc_library.h",0x2c);
    plVar3 = *(long **)puVar2;
  }
                    /* try { // try from 00604008 to 0060400b has its CatchHandler @ 006041d8 */
  (**(code **)(*plVar3 + 0x10))();
  puVar2 = PTR_DAT_04375248;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[4] = (long)(puVar2 + 0x98);
  param_1[1] = (long)(puVar2 + 0x70);
  *param_1 = (long)(puVar2 + 0x10);
  plVar3 = param_1 + 6;
  *plVar3 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if ((*param_2 & 1) == 0) {
    lVar6 = *(long *)(param_2 + 8);
    lVar5 = *(long *)param_2;
    param_1[8] = *(long *)(param_2 + 0x10);
    param_1[7] = lVar6;
    *plVar3 = lVar5;
    goto LAB_006040c8;
  }
  __n = *(ulong *)(param_2 + 8);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00604148 to 0060414f has its CatchHandler @ 00604150 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_2 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 0x31);
    *(char *)plVar3 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_006040b4;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    param_1[6] = uVar4 | 1;
    param_1[7] = __n;
    param_1[8] = (long)__dest;
LAB_006040b4:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_006040c8:
  param_1[9] = param_3;
                    /* try { // try from 006040dc to 006040df has its CatchHandler @ 00604168 */
  (**(code **)(**(long **)puVar1 + 0x70))(*(long **)puVar1,param_1 + 10);
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  lVar5 = *param_4;
  param_1[0x10] = param_4[1];
  param_1[0xf] = lVar5;
  param_1[0x11] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  return;
}


