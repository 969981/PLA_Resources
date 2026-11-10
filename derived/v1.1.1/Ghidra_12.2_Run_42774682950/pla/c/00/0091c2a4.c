/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091c2a4; name: FUN_0091c2a4
 */


void FUN_0091c2a4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_150 [8];
  undefined8 auStack_148 [30];
  uint local_58;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  
  local_44 = 5;
  local_46 = 0;
  local_48 = 0x101;
  local_45 = FUN_00935200(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0));
  FUN_009346d8(auStack_150,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),&local_48);
  if (local_58 != 0) {
    lVar5 = (ulong)local_58 << 3;
    puVar4 = auStack_148;
    do {
      uVar3 = *puVar4;
      uVar1 = FUN_00931f0c(param_2);
      uVar2 = FUN_00931f0c(uVar3);
      FUN_0091c360(param_1,uVar1,uVar2);
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
  }
  return;
}


