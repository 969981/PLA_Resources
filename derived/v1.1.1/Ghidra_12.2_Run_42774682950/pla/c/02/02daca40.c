/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02daca40; name: FUN_02daca40
 */


void FUN_02daca40(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  
  FUN_02dac81c();
  *param_1 = &PTR_LAB_04299b18;
  param_1[9] = &PTR_LAB_04299b90;
  param_1[10] = &PTR_LAB_04299be8;
  param_1[0xd] = PTR_DAT_04388570 + 0x10;
  FUN_00986bfc(param_1 + 0xe,param_2 + 8);
  lVar6 = *(long *)(param_2 + 0x18);
  param_1[0x10] = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar6 = *(long *)(param_2 + 0x20);
  param_1[0x11] = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar6 = *(long *)(param_2 + 0x28);
  param_1[0x12] = lVar6;
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x58);
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar2 = PTR_DAT_0437a7a0 + 0x10;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0xd] = puVar2;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  puVar2 = PTR_DAT_04388568;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x13] = &PTR_LAB_04299c10;
  param_1[0x14] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x19] = puVar2 + 0x10;
  param_1[0x1a] = 0;
  param_1[0x1f] = &PTR_LAB_04299c50;
  param_1[0x20] = 0;
  param_1[0x25] = &PTR_LAB_04299c90;
  param_1[0x26] = 0;
  param_1[0x2b] = &PTR_LAB_04299cd0;
  param_1[0x2c] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x31] = &PTR_LAB_04299d10;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  puVar2 = PTR_DAT_0437ef28 + 0x10;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x55] = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x37] = puVar2;
  param_1[0x38] = 0;
  param_1[0x3d] = &PTR_LAB_04299d50;
  param_1[0x3e] = 0;
  param_1[0x43] = &PTR_LAB_04299d90;
  param_1[0x49] = &PTR_LAB_04299dd0;
  param_1[0x4f] = &PTR_LAB_04299e10;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  return;
}


