/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c7b0c; name: FUN_032c7b0c
 */


void FUN_032c7b0c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  char *__s;
  undefined *puVar2;
  size_t sVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  puVar2 = PTR_PTR_0434a080;
  __s = (char *)(*param_2 & 0xfffffffffffffffe);
  if (__s != (char *)0x0) {
    sVar3 = strlen(__s);
    uVar1 = (int)sVar3 + 1;
    puVar4 = (undefined8 *)
             (**(code **)(*(long *)puVar2 + 0x10))
                       (puVar2,(long)((sVar3 << 0x20) + 0x1100000000) >> 0x20,0);
    *puVar4 = puVar2;
    *(uint *)(puVar4 + 1) = uVar1;
    memcpy(puVar4 + 2,__s,(ulong)uVar1);
    *param_1 = (ulong)(puVar4 + 2) | 1;
  }
  return;
}


