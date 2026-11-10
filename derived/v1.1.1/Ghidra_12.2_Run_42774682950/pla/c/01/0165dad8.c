/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0165dad8; name: FUN_0165dad8
 */


undefined8 FUN_0165dad8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *local_68;
  
  if (*(char *)(param_1 + 0xd8) == '\0') {
    uVar5 = FUN_016172c4(*(undefined8 *)(param_1 + 0x58));
    uVar6 = FUN_01672900(*(undefined8 *)(param_1 + 0x60));
    uVar7 = FUN_0169f964(*(undefined8 *)(param_1 + 0x68));
    uVar8 = FUN_016afddc(*(undefined8 *)(param_1 + 0x70));
    uVar9 = FUN_01698360(*(undefined8 *)(param_1 + 0x80));
    uVar10 = FUN_01674434(*(undefined8 *)(param_1 + 0x88));
    uVar11 = FUN_01666664(*(undefined8 *)(param_1 + 0x90));
    uVar12 = FUN_016628e4(*(undefined8 *)(param_1 + 0xb8));
    uVar13 = FUN_01613a60(*(undefined8 *)(param_1 + 0xc0));
    uVar14 = FUN_016b048c(*(undefined8 *)(param_1 + 200));
    uVar15 = 0;
    if (((((((uVar5 & 1) != 0) && ((uVar6 & 1) != 0)) && ((uVar7 & 1) != 0)) &&
         (((uVar8 & 1) != 0 && ((uVar9 & 1) != 0)))) &&
        (((uVar10 & 1) != 0 && (((uVar11 & 1) != 0 && ((uVar12 & 1) != 0)))))) &&
       (((uVar13 & 1) != 0 && ((uVar14 & 1) != 0)))) {
      uVar15 = *(undefined8 *)(param_1 + 0x80);
      local_68 = *(long **)(param_1 + 0x60);
      if (local_68 != (long *)0x0) {
        plVar1 = local_68 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_0169999c(uVar15,&local_68);
      if (local_68 != (long *)0x0) {
        plVar1 = local_68 + 10;
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
          (**(code **)(*local_68 + 0x10))();
        }
      }
      uVar15 = 1;
      *(undefined1 *)(param_1 + 0xd8) = 1;
    }
  }
  else {
    uVar15 = 1;
  }
  return uVar15;
}


