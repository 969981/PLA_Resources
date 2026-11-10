/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b5b660; name: FUN_02b5b660
 */


void FUN_02b5b660(long *param_1,long *param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  long local_40 [3];
  undefined4 local_28;
  undefined1 auStack_18 [8];
  
  local_40[0] = *param_2;
  local_28 = 0;
  local_40[1] = 0x48;
  local_40[2] = 4;
  lVar6 = FUN_01b34908(auStack_18,*(undefined8 *)(local_40[0] + 8),local_40);
  *param_1 = lVar6;
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = *param_1;
  }
  FUN_02bbfe84(lVar6,local_40 + 1,1,0,0);
  uVar2 = *(uint *)(lVar6 + 0xa0);
  uVar10 = *(ulong *)(*(long *)(lVar6 + 0x98) + 0x138);
  uVar9 = (uint)uVar10;
  if (uVar2 < 3) {
    uVar9 = uVar9 & uVar2 - 1;
  }
  else {
    iVar5 = 0;
    if ((ulong)uVar2 != 0) {
      iVar5 = (int)(uVar10 / uVar2);
    }
    uVar9 = uVar9 - iVar5 * uVar2;
  }
  pcVar7 = (char *)FUN_02bc0470((long)(int)uVar9,lVar6 + 0x58);
  if (*pcVar7 != '\0' && *(long *)(pcVar7 + 8) != 0) {
    if (*(long *)(*(long *)(pcVar7 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    puVar8 = (undefined8 *)(*DAT_043f0470)();
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0x200010000;
      puVar8[1] = 0x5000400030002;
      puVar8[2] = 0x7000600040006;
      puVar8[3] = 0x8000a00090008;
      puVar8[4] = 0xd000c000b000a;
      puVar8[5] = 0xf000e000c000e;
      puVar8[6] = 0x10001200110010;
      puVar8[7] = 0x15001400130012;
      puVar8[8] = 0x17001600140016;
    }
  }
  return;
}


