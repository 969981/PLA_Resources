/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f203c4; name: FUN_01f203c4
 */


void FUN_01f203c4(long param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 local_78;
  char *pcStack_70;
  size_t local_68;
  long *local_60;
  undefined8 local_58;
  char *pcStack_50;
  size_t local_48;
  undefined8 uStack_40;
  long *local_38;
  long local_28;
  
  piVar2 = (int *)(param_1 + 0x1009bc);
  if (0 < *piVar2) {
    if ((*(long *)(param_1 + 0x68) != 0) && (FUN_019bf828(&local_38), local_38 != (long *)0x0)) {
      local_48 = strlen("Global");
      local_58 = 0x757527f9d900520e;
      pcStack_50 = "Global";
      uStack_40 = 0;
      local_68 = strlen("TMMinBrightness");
      local_78 = 0x30a733607634d215;
      pcStack_70 = "TMMinBrightness";
      local_60 = (long *)0x0;
      lVar6 = FUN_02b1f8b0(DAT_043ef5b0,&local_58);
      local_28 = lVar6;
      uVar7 = FUN_02b21278(DAT_043ef5b0,&local_28);
      if ((uVar7 & 1) != 0) {
        uVar7 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
        lVar9 = *(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar7 / 0x12) * 8);
        lVar10 = (uVar7 % 0x12) * 0xd8;
        lVar6 = (lVar6 >> 0x20) * 0x1b0;
        puVar8 = (undefined4 *)FUN_00aef474(*(long *)(lVar9 + lVar10) + lVar6 + 0x70,&local_78);
        *puVar8 = 0;
        *(undefined1 *)(*(long *)(lVar9 + lVar10) + lVar6 + 0x1a9) = 1;
        if (local_60 != (long *)0x0) {
          (**(code **)(*local_60 + 0x20))();
        }
      }
      if (local_38 != (long *)0x0) {
        lVar6 = local_38[0xb];
        piVar1 = (int *)(lVar6 + 0xc);
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
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*local_38 + 0x20))();
        }
      }
    }
    *piVar2 = *piVar2 + -1;
  }
  return;
}


