/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c1a54; name: FUN_008c1a54
 */


undefined1 FUN_008c1a54(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *local_148;
  undefined1 local_13c [4];
  undefined1 auStack_138 [8];
  undefined8 local_130 [30];
  uint local_40;
  undefined8 local_38;
  
  local_38 = 0x102000100;
  FUN_008b2878();
  uVar5 = FUN_00923c00();
  FUN_009346d8(auStack_138,uVar5,&local_38);
  if (local_40 != 0) {
    puVar7 = local_130;
    lVar8 = (ulong)local_40 << 3;
    do {
      local_13c[0] = FUN_00931f0c(*puVar7);
      FUN_008b2878(param_1);
      uVar5 = FUN_00923bc4();
      FUN_00995ec4(&local_148,uVar5,local_13c);
      uVar6 = local_13c[0];
      if (local_148 != (long *)0x0) {
        lVar8 = local_148[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_148 + 0x20))();
        }
        goto LAB_008c1ae0;
      }
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  uVar6 = 0x1f;
LAB_008c1ae0:
  FUN_0093245c(auStack_138);
  return uVar6;
}


