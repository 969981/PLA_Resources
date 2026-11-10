/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085e4c8; name: FUN_0085e4c8
 */


void FUN_0085e4c8(ushort *param_1)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0xc] = 0xffff;
  param_1[0xd] = 0xffff;
  param_1[0xe] = 0xffff;
  param_1[0xf] = 0xffff;
  if ((*(undefined8 **)(param_1 + 4) != (undefined8 *)0x0) &&
     (uVar2 = (ulong)*param_1, *param_1 != 0)) {
    uVar5 = 0;
    puVar6 = (undefined8 *)**(undefined8 **)(param_1 + 4);
    while( true ) {
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0xffffffffffffffff;
        puVar6[1] = 0;
        *(undefined4 *)(puVar6 + 2) = 0;
        FUN_007e4488(puVar6 + 3);
        FUN_007e4488(puVar6 + 7);
        *(undefined2 *)(puVar6 + 0xb) = 0;
        uVar2 = (ulong)*param_1;
      }
      uVar5 = uVar5 + 1;
      if (uVar2 <= uVar5) break;
      puVar6 = *(undefined8 **)(*(long *)(param_1 + 4) + uVar5 * 8);
    }
  }
  lVar3 = *(long *)(param_1 + 0x14);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (lVar3 != 0) {
    uVar1 = *param_1;
    uVar2 = (ulong)uVar1;
    if (uVar2 != 0) {
      uVar5 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        puVar6 = (undefined8 *)(lVar3 + 0x10);
        do {
          lVar4 = lVar4 + 4;
          puVar6[-2] = 0xffffffffffffffff;
          puVar6[-1] = 0xffffffffffffffff;
          *puVar6 = 0xffffffffffffffff;
          puVar6[1] = 0xffffffffffffffff;
          puVar6 = puVar6 + 4;
        } while (uVar2 - uVar5 != lVar4);
      }
      if ((uVar1 & 3) != 0) {
        puVar6 = (undefined8 *)(lVar3 + lVar4 * 8);
        do {
          uVar5 = uVar5 - 1;
          *puVar6 = 0xffffffffffffffff;
          puVar6 = puVar6 + 1;
        } while (uVar5 != 0);
      }
    }
  }
  return;
}


