/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef75c4; name: FUN_02ef75c4
 */


void FUN_02ef75c4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  char local_14 [4];
  
  puVar1 = (undefined8 *)FUN_02e57a50((long *)(param_1 + 0x70),param_2,local_14);
  if ((puVar1 != (undefined8 *)0x0) && (local_14[0] != '\0')) {
    lVar5 = *(long *)(param_1 + 0x70);
    uVar3 = *(uint *)(param_1 + 0x78);
    puVar2 = (undefined8 *)(lVar5 + (ulong)uVar3 * 4 + -4);
    if (puVar1 < puVar2) {
      uVar6 = (lVar5 + (ulong)uVar3 * 4 + ~(ulong)puVar1) - 4;
      uVar3 = ((uint)(uVar6 >> 2) & 0x3fffffff) + 1;
      uVar7 = (ulong)uVar3 & 3;
      if ((uVar3 & 3) != 0) {
        puVar4 = puVar1;
        do {
          puVar1 = (undefined8 *)((long)puVar4 + 4);
          *(undefined4 *)puVar4 = *(undefined4 *)puVar1;
          uVar7 = uVar7 - 1;
          puVar4 = puVar1;
        } while (uVar7 != 0);
      }
      if (0xb < uVar6) {
        do {
          *puVar1 = *(undefined8 *)((long)puVar1 + 4);
          *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((long)puVar1 + 0xc);
          puVar4 = puVar1 + 2;
          *(undefined4 *)((long)puVar1 + 0xc) = *(undefined4 *)puVar4;
          puVar1 = puVar4;
        } while (puVar4 < puVar2);
      }
      uVar3 = *(uint *)(param_1 + 0x78);
    }
    *(uint *)(param_1 + 0x78) = uVar3 - 1;
  }
  return;
}


