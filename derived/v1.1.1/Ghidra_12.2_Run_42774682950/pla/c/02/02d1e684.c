/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d1e684; name: FUN_02d1e684
 */


void FUN_02d1e684(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_138;
  undefined1 auStack_130 [16];
  undefined4 local_120;
  undefined8 local_11c;
  char local_114 [20];
  undefined1 auStack_100 [136];
  undefined8 local_78;
  undefined8 local_70;
  
  local_138 = (long *)*param_2;
  if (local_138 != (long *)0x0) {
    lVar7 = local_138[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_02ccab28(param_1,&local_138,param_3);
  if (local_138 != (long *)0x0) {
    lVar7 = local_138[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_138 + 0x20))();
    }
  }
  *param_1 = &PTR_FUN_04297cf0;
  param_1[9] = &PTR_LAB_04297e00;
  param_1[10] = &PTR_FUN_04297e48;
  param_1[0xd] = &PTR_LAB_04297e70;
  param_1[0x43] = PTR_DAT_04388520 + 0x10;
  FUN_007e3120(param_1 + 0x44);
  puVar2 = param_1 + 0x48;
  param_1[0x47] = 0;
  FUN_007e8190(puVar2);
  FUN_007e8434(puVar2);
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  FUN_007e8190(param_1 + 0x5b);
  FUN_007e8434(param_1 + 0x5b);
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  FUN_007e8190(param_1 + 0x6e);
  FUN_007e8434(param_1 + 0x6e);
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  FUN_007e8190(param_1 + 0x81);
  FUN_007e8434(param_1 + 0x81);
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  *(undefined1 *)(param_1 + 0x94) = 1;
  *(undefined8 *)((long)param_1 + 0x4a4) = 0x3e800002710;
  *(undefined4 *)(param_1 + 0x44) = 1;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0;
  param_1[0x43] = &PTR_LAB_04297ee0;
  *(undefined1 *)((long)param_1 + 0x4ac) = 1;
  param_1[0x96] = &PTR_LAB_04297f10;
  param_1[0x97] = 0;
  FUN_00809514(param_1 + 0x98);
  param_1[0x97] = param_1 + 0x98;
  param_1[0x13f] = param_4;
  *(undefined1 *)(param_1 + 0x140) = 1;
  FUN_007e8190(auStack_100);
  FUN_007e8434(auStack_100);
  local_78 = *param_3;
  local_70 = param_3[1];
  FUN_007ec5c4(&local_120,&DAT_038bdc00);
  FUN_007e81fc(auStack_130,auStack_100,&local_120);
  FUN_007e3120(&local_120);
  local_120 = 1;
  local_11c = DAT_03a85308;
  local_114[0] = s_eCZWFv0X_03a85310[0];
  local_114[1] = s_eCZWFv0X_03a85310[1];
  local_114[2] = s_eCZWFv0X_03a85310[2];
  local_114[3] = s_eCZWFv0X_03a85310[3];
  local_114[4] = s_eCZWFv0X_03a85310[4];
  local_114[5] = s_eCZWFv0X_03a85310[5];
  local_114[6] = s_eCZWFv0X_03a85310[6];
  local_114[7] = s_eCZWFv0X_03a85310[7];
  FUN_007e8410(puVar2,auStack_100);
  param_1[0x5a] = local_70;
  param_1[0x59] = local_78;
  FUN_007e3130(param_1 + 0x44,&local_120);
  *(undefined1 *)((long)param_1 + 0x4ac) = 0;
  *(undefined8 *)((long)param_1 + 0x4a4) = 0x3e800002710;
  param_1[0x47] = 0;
  FUN_007e81d4(auStack_100);
  return;
}


