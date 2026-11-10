/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019188bc; name: FUN_019188bc
 */


undefined1  [16] FUN_019188bc(long param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined8 local_48 [3];
  long *local_30;
  uint local_28 [2];
  long *local_18;
  
  if ((*(long *)(param_1 + 0x278) == 0) ||
     (FUN_0191cb34(&local_18), plVar8 = local_18, local_18 == (long *)0x0)) {
    uVar9 = 0;
    uVar10 = 0;
    uVar12 = 2;
    uVar13 = 1;
  }
  else {
    FUN_0191d840(local_48,*(undefined4 *)(param_1 + 0x288));
    uVar9 = FUN_0192279c(plVar8,local_48[0]);
    uVar10 = uVar9 >> 0x20;
    uVar13 = uVar9 >> 0x28;
    local_28[0] = (uint)uVar9;
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x20))();
    }
    puVar2 = local_28;
    if (*(char *)(param_1 + 0x28c) != '\0') {
      puVar2 = (uint *)(param_1 + 0x290);
    }
    puVar3 = local_28;
    if ((uVar9 >> 0x20 & 0xff) != 0) {
      puVar3 = puVar2;
    }
    uVar5 = *puVar3;
    uVar9 = (ulong)*(uint *)(param_1 + 0x294);
    *(undefined4 *)(param_1 + 0x294) = 0;
    *(undefined8 *)(param_1 + 0x28c) = 0;
    if (local_18 != (long *)0x0) {
      lVar11 = local_18[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar4 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_18 + 0x20))();
      }
    }
    uVar12 = (ulong)uVar5;
  }
  auVar14._8_8_ = uVar13 & 0xff;
  auVar14._0_8_ = uVar9 << 0x30 | uVar12 | (uVar10 & 0xff) << 0x20;
  return auVar14;
}


