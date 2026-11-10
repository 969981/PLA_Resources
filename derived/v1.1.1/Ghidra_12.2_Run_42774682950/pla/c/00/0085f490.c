/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085f490; name: FUN_0085f490
 */


undefined8 FUN_0085f490(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  
  uVar2 = *(uint *)(param_1 + 0xc0);
  if (uVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0xb8);
    lVar4 = 0;
    do {
      if (*(long *)(lVar3 + lVar4 + 0x10) == param_2) {
        if (lVar3 + lVar4 != 0) {
          return 0;
        }
        goto LAB_0085f4ec;
      }
      lVar4 = lVar4 + 0x78;
    } while ((ulong)uVar2 * 0x78 != lVar4);
    if (uVar2 != 0) {
      lVar3 = *(long *)(param_1 + 0xb8);
LAB_0085f4ec:
      lVar4 = 0;
      uVar5 = 0;
      do {
        lVar1 = lVar3 + lVar4;
        if (*(long *)(lVar1 + 0x10) == -1) {
          FUN_007ecf14(lVar1);
          FUN_007ecf14(lVar1 + 8);
          *(undefined4 *)(lVar1 + 0x20) = 0;
          *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(lVar1 + 0x18) = 0;
          FUN_007e4488(lVar1 + 0x28);
          FUN_007e4488(lVar1 + 0x48);
          *(undefined2 *)(lVar1 + 0x68) = 0;
          *(undefined4 *)(lVar1 + 0x74) = 0;
          lVar3 = FUN_0085a3c0();
          if (lVar3 == 0) {
            fVar6 = 5.0;
          }
          else {
            fVar6 = (float)*(int *)(lVar3 + 4);
            if (*(int *)(lVar3 + 4) < 1) {
              fVar6 = 5.0;
            }
          }
          *(float *)(lVar1 + 0x70) = fVar6;
          lVar4 = *(long *)(param_1 + 0xb8) + lVar4;
          *(long *)(lVar4 + 0x10) = param_2;
          *(undefined1 *)(lVar4 + 0x69) = 0;
          return 1;
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x78;
      } while (uVar5 < uVar2);
    }
  }
  return 0;
}


