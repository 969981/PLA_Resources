/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120977c; name: FUN_0120977c
 */


void FUN_0120977c(undefined1 *param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  char local_70;
  undefined1 auStack_6c [20];
  char local_58;
  undefined8 local_50;
  char local_48;
  undefined8 local_44;
  undefined8 local_3c;
  
  FUN_02728988(&local_78);
  if (CONCAT44(uStack_74,local_78) != 0) {
    lVar6 = FUN_0120ccf0();
    puVar4 = (undefined8 *)CONCAT44(uStack_74,local_78);
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_88[0] = *puVar4;
        FUN_02a44274(lVar8 + 0xd8,local_88);
      }
    }
    if (lVar6 != 0) {
      FUN_02cbb590(local_88);
      if ((int)local_88[0] == 0) {
        if (((param_2 & 1) == 0) || (uVar7 = FUN_0120994c(), (uVar7 & 1) == 0)) {
          *param_1 = 0;
          return;
        }
        FUN_02784b80(&local_78);
      }
      else {
        FUN_02727bb4(&local_78,local_88);
      }
      goto LAB_0120983c;
    }
  }
  FUN_02784bc0(&local_78);
LAB_0120983c:
  *param_1 = 0;
  param_1[8] = 0;
  if ((char)local_78 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = uStack_74;
    param_1[8] = 1;
  }
  param_1[0x10] = 0;
  if (local_70 != '\0') {
    FUN_007ee578(param_1 + 0x14,auStack_6c);
    param_1[0x10] = 1;
  }
  param_1[0x28] = 0;
  if (local_58 != '\0') {
    *(undefined8 *)(param_1 + 0x30) = local_50;
    param_1[0x28] = 1;
  }
  param_1[0x38] = 0;
  if (local_48 != '\0') {
    *(undefined8 *)(param_1 + 0x3c) = local_44;
    param_1[0x38] = 1;
  }
  *(undefined8 *)(param_1 + 0x44) = local_3c;
  *param_1 = 1;
  FUN_02727c1c(&local_78);
  return;
}


