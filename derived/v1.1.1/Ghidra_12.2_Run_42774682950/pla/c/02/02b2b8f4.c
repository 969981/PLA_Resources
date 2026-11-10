/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2b8f4; name: FUN_02b2b8f4
 */


void FUN_02b2b8f4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *local_58;
  
  lVar5 = *(long *)(param_1 + 0xd8);
  uVar6 = (*(long *)(param_1 + 0xe0) - lVar5 >> 3) * -0x3333333333333333;
  uVar7 = *(ulong *)(param_1 + 0x110);
  if (uVar7 < uVar6) {
    do {
      FUN_02b3343c(&local_58,*(undefined8 *)(param_1 + 0x58),lVar5 + uVar7 * 0x28);
      uVar6 = (local_58[0x17] - local_58[0x16] >> 4) * 0xc4ec4ec5;
      if ((int)uVar6 != 0) {
        FUN_02b2bd3c(param_1 + 0x118,local_58[0x16]);
        lVar5 = (uVar6 & 0xffffffff) - 1;
        if (lVar5 != 0) {
          lVar8 = 0xd0;
          do {
            FUN_02b2bd3c(param_1 + 0x118,local_58[0x16] + lVar8);
            lVar5 = lVar5 + -1;
            lVar8 = lVar8 + 0xd0;
          } while (lVar5 != 0);
        }
      }
      lVar8 = *(long *)(param_1 + 0x158);
      for (lVar5 = *(long *)(param_1 + 0x150); lVar5 != lVar8; lVar5 = lVar5 + 8) {
        FUN_02b2c92c(param_1,lVar5,&local_58);
      }
      if (local_58 != (long *)0x0) {
        plVar1 = local_58 + 10;
        do {
          iVar4 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_58 + 0x10))();
        }
      }
      lVar5 = *(long *)(param_1 + 0xd8);
      uVar6 = (*(long *)(param_1 + 0xe0) - lVar5 >> 3) * -0x3333333333333333;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  *(ulong *)(param_1 + 0x110) = uVar6;
  return;
}


