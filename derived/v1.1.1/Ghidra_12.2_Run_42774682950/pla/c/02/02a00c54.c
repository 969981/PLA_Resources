/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a00c54; name: FUN_02a00c54
 */


void FUN_02a00c54(long param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  char cVar4;
  
  cVar2 = *(char *)(param_3 + 1);
  cVar4 = cVar2 != '\x06';
  uVar3 = *param_3;
  if (*(char *)((long)param_3 + 3) != '\x06') {
    cVar4 = '\x02';
  }
  if (*(char *)(param_3 + 2) == '\0') {
    if (cVar4 == '\x02') {
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x8b,cVar2,
                   *(char *)((long)param_3 + 3),uVar3);
      return;
    }
    if (cVar4 == '\x01') {
      if (cVar2 != '\x06') {
        FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x8a,cVar2,uVar3);
        return;
      }
    }
    else if (cVar4 == '\0') {
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x89,uVar3);
      return;
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 4);
    if (cVar4 == '\x02') {
      FUN_02a3fae8(*(undefined8 *)(param_1 + 0x18),uVar1,0x8b);
      return;
    }
    if (cVar4 == '\x01') {
      FUN_02a3fae8(*(undefined8 *)(param_1 + 0x18),uVar1,0x8a,cVar2,uVar3);
      return;
    }
    if (cVar4 == '\0') {
      FUN_02a3fae8(*(undefined8 *)(param_1 + 0x18),uVar1,0x89,uVar3);
      return;
    }
  }
  return;
}


