/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e49180; name: FUN_02e49180
 */


void FUN_02e49180(ushort param_1,ushort param_2,undefined2 param_3,long param_4,long *param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auStack_24 [4];
  
  uVar1 = param_2;
  if (param_2 <= param_1) {
    uVar1 = param_1;
    param_1 = param_2;
  }
  puVar2 = (undefined8 *)FUN_02e4ace0(param_5,CONCAT22(uVar1,param_1),auStack_24);
  if (*(short *)((long)puVar2 + 4) == -1) {
    *(undefined2 *)((long)puVar2 + 4) = param_3;
    puVar2[1] = param_4;
  }
  else if (puVar2[1] == param_4) {
    uVar4 = *(uint *)(param_5 + 1);
    puVar3 = (undefined8 *)((*param_5 + (ulong)uVar4 * 0x18) - 0x18);
    if (puVar2 < puVar3) {
      do {
        puVar5 = puVar2 + 3;
        puVar2[2] = puVar2[5];
        *puVar2 = *puVar5;
        puVar2[1] = puVar2[4];
        puVar2 = puVar5;
      } while (puVar5 < puVar3);
      uVar4 = *(uint *)(param_5 + 1);
    }
    *(uint *)(param_5 + 1) = uVar4 - 1;
  }
  else {
    *(undefined2 *)((long)puVar2 + 6) = param_3;
    puVar2[2] = param_4;
  }
  return;
}


