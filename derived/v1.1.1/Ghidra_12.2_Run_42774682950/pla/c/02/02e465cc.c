/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e465cc; name: FUN_02e465cc
 */


undefined8 FUN_02e465cc(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x30) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    lVar6 = 0;
    do {
      if (*(long *)(lVar2 + lVar6) == param_2) {
        puVar8 = (undefined8 *)(lVar2 + lVar6);
        if ((param_3 & 1) != 0) {
          FUN_02e465cc(param_2,param_1,0);
          lVar2 = *(long *)(param_1 + 0x28);
          uVar4 = (ulong)*(uint *)(param_1 + 0x30);
        }
        lVar2 = lVar2 + uVar4 * 8;
        puVar3 = (undefined8 *)(lVar2 + -8);
        if (puVar8 < puVar3) {
          uVar5 = (lVar2 + ~(ulong)puVar8) - 8;
          uVar1 = ((uint)(uVar5 >> 3) & 0x1fffffff) + 1;
          uVar4 = (ulong)uVar1 & 3;
          if ((uVar1 & 3) != 0) {
            puVar7 = puVar8;
            do {
              puVar8 = puVar7 + 1;
              *puVar7 = *puVar8;
              uVar4 = uVar4 - 1;
              puVar7 = puVar8;
            } while (uVar4 != 0);
          }
          if (0x17 < uVar5) {
            do {
              *puVar8 = puVar8[1];
              puVar8[1] = puVar8[2];
              puVar8[2] = puVar8[3];
              puVar7 = puVar8 + 4;
              puVar8[3] = *puVar7;
              puVar8 = puVar7;
            } while (puVar7 < puVar3);
          }
          uVar4 = (ulong)*(uint *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x30) = (int)uVar4 + -1;
        *(undefined1 *)(param_1 + 0x38) = 1;
        return 1;
      }
      lVar6 = lVar6 + 8;
    } while (uVar4 * 8 != lVar6);
  }
  return 0xf;
}


