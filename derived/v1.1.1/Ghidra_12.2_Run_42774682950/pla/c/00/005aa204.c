/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005aa204; name: FUN_005aa204
 */


void FUN_005aa204(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  void *__ptr_03;
  void *__ptr_04;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x20);
  uVar8 = (ulong)*(uint *)(lVar6 + 0xe80);
  uVar7 = (ulong)*(uint *)(lVar6 + 0xe48);
  __ptr = (void *)FUN_005aa3d0(*(undefined8 *)(param_1 + 0x20),
                               *(undefined8 *)(*(long *)(param_1 + 8) + 8));
  uVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10) + *(long *)(*(long *)(param_1 + 8) + 0x28);
  uVar2 = 0x7fffffff;
  if ((long)uVar1 < 0x80000000) {
    uVar2 = uVar1 & 0xffffffff;
  }
  __ptr_00 = (void *)FUN_005aa3d0(*(undefined8 *)(param_1 + 0x28),uVar2);
  __ptr_01 = (void *)FUN_005aa3d0(*(undefined8 *)(param_1 + 0x30),
                                  *(undefined8 *)(*(long *)(param_1 + 8) + 0x18));
  if (*(long *)(param_1 + 0x10) == 0) {
    __ptr_02 = (void *)FUN_002ec960(&DAT_03996322,0x20,0x1e);
    __ptr_03 = (void *)FUN_002ec960(&DAT_03996322,0x20,0x1e);
    __ptr_04 = (void *)FUN_002ec960(&DAT_03996322,0x20,0x1e);
    lVar6 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  else {
    __ptr_02 = (void *)FUN_005aa3d0(*(long *)(param_1 + 0x38) + uVar7,
                                    *(long *)(*(long *)(param_1 + 0x10) + 8) + uVar7);
    __ptr_03 = (void *)FUN_005aa3d0(*(long *)(param_1 + 0x40) + uVar8,
                                    *(long *)(*(long *)(param_1 + 0x10) + 0x10) + uVar8);
    __ptr_04 = (void *)FUN_005aa3d0(*(long *)(param_1 + 0x48) + uVar8,
                                    *(long *)(*(long *)(param_1 + 0x10) + 0x18) + uVar8);
    lVar6 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(*(long *)(lVar4 + 0x28) + 200);
  }
  puVar3 = &DAT_0397b746;
  if (*(char *)(*(long *)(lVar6 + 0x20) + 0xcf0) != '\0') {
    puVar3 = &DAT_039429e0;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/flow_control.cc"
               ,0x70,0,"%p[%u][%s] | %s | trw:%s, tlw:%s, taw:%s, srw:%s, slw:%s, saw:%s",lVar6,
               uVar5,puVar3,*(undefined8 *)(param_1 + 0x18),__ptr,__ptr_00,__ptr_01,__ptr_02,
               __ptr_03,__ptr_04);
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  free(__ptr_03);
  free(__ptr_04);
  return;
}


