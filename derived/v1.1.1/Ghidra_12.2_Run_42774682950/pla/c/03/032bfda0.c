/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bfda0; name: FUN_032bfda0
 */


uint * FUN_032bfda0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  
  uVar2 = *(uint *)(param_1 + 2);
  if (uVar2 == 0) {
    puVar10 = (uint *)0x0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar6 = *(uint **)(*param_1 + 8);
    *param_1 = (long)puVar6;
    if (puVar6 == (uint *)0x0) {
      puVar10 = (uint *)0x0;
      param_1[1] = 0;
    }
    else {
      uVar1 = *puVar6 & 0xffff;
      if ((int)uVar2 <= (int)(*puVar6 & 0xffff)) {
        uVar1 = uVar2;
      }
      if ((int)uVar1 < 1) {
        puVar10 = (uint *)0x0;
        param_1[1] = 0;
      }
      else {
        puVar10 = puVar6 + 8;
        *(uint *)(param_1 + 2) = uVar2 - uVar1;
        *(uint *)((long)param_1 + 0x14) = uVar1;
        param_1[1] = (long)puVar10;
        Hint_Prefetch(*(long *)(puVar6 + 2),0,0,0);
        Hint_Prefetch(*(long *)(puVar6 + 2) + 0x40,0,0,0);
        Hint_Prefetch(puVar6 + 0x20,0,0,0);
        Hint_Prefetch(puVar6 + 0x30,0,0,0);
      }
      puVar8 = (uint *)param_1[4];
      if (puVar6 != puVar8) {
        uVar2 = *(uint *)(param_1 + 5);
        if (uVar2 != 0) {
          if (uVar2 == (*puVar8 & 0xffff)) {
            lVar9 = param_1[3];
            puVar7 = (undefined8 *)param_1[6];
            *(undefined8 *)(*(long *)(lVar9 + 0x10) + (long)(int)puVar8[1] * 8) = 0;
            *(undefined1 *)(lVar9 + 0xc) = 1;
            iVar3 = *(int *)(puVar7 + 0xb);
            lVar9 = puVar7[1];
            *(uint **)(lVar9 + (long)iVar3 * 8) = puVar8;
            *(int *)(puVar7 + 0xb) = iVar3 + 1;
            if (*(int *)((long)puVar7 + 0x5c) <= iVar3 + 1) {
              (**(code **)(*(long *)*puVar7 + 0x28))
                        ((long *)*puVar7,lVar9 + (long)(iVar3 + -5) * 8,6);
              *(int *)(puVar7 + 0xb) = iVar3 + -5;
            }
          }
          else {
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar8,0x10);
              if (bVar5) {
                *puVar8 = *puVar8 - uVar2;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          *(undefined4 *)(param_1 + 5) = 0;
          *(undefined1 *)(param_1[3] + 0xc) = 1;
          puVar6 = (uint *)*param_1;
        }
        param_1[4] = (long)puVar6;
        *(undefined4 *)(param_1 + 5) = *(undefined4 *)((long)param_1 + 0x14);
      }
    }
  }
  return puVar10;
}


