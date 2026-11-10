/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d8be8; name: FUN_003d8be8
 */


void FUN_003d8be8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  void *__ptr_00;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (((long *)*param_3 != (long *)0x0) && (plVar4 = *(long **)*param_3, plVar4 != (long *)0x0)) {
    plVar1 = plVar4 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar5 = *plVar4;
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar5 + 8),plVar4,lVar6,lVar6 + 1);
    }
    if (lVar6 < 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                    0x7c,"RefNonZero");
    }
  }
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar8 = param_3[1];
  uVar7 = *param_3;
  uVar10 = param_3[3];
  uVar9 = param_3[2];
  *(undefined4 *)(param_1 + 9) = param_4;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  param_1[7] = uVar10;
  param_1[6] = uVar9;
  param_1[8] = 1;
  FUN_002ef6d0(param_1 + 10);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_5;
  if (PTR_DAT_04374098[0x10] != '\0') {
    uStack_58 = param_1[1];
    local_60 = *param_1;
    uStack_48 = param_1[3];
    uStack_50 = param_1[2];
                    /* try { // try from 003d8cbc to 003d8d23 has its CatchHandler @ 003d8d5c */
    __ptr = (void *)FUN_002f2680(&local_60);
    uStack_78 = param_1[5];
    local_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    __ptr_00 = (void *)FUN_002f2680(&local_80);
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata.cc",0xa1,0,
                 "mdelem   %s:%p:%ld: \'%s\' = \'%s\'","INTERNED_MD_NOREF_KEY",param_1,param_1[8],
                 __ptr,__ptr_00);
    free(__ptr);
    free(__ptr_00);
  }
  return;
}


