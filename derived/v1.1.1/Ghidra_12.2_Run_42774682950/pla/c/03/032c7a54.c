/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c7a54; name: FUN_032c7a54
 */


void FUN_032c7a54(ulong *param_1,char *param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *__dest;
  ulong uVar5;
  
  *param_1 = 0;
  puVar2 = PTR_PTR_0434a080;
  if ((param_2 != (char *)0x0) || (param_3 != -1)) {
    if (param_2 == (char *)0x0) {
      uVar5 = 0;
    }
    else {
      if (param_3 < 0) {
        sVar3 = strlen(param_2);
        uVar1 = (int)sVar3 + 1;
        puVar4 = (undefined8 *)
                 (**(code **)(*(long *)puVar2 + 0x10))
                           (puVar2,(long)((sVar3 << 0x20) + 0x1100000000) >> 0x20,0);
        *puVar4 = puVar2;
        __dest = puVar4 + 2;
        *(uint *)(puVar4 + 1) = uVar1;
        memcpy(__dest,param_2,(ulong)uVar1);
      }
      else {
        __dest = (undefined8 *)FUN_032c4ae0(param_2,param_3);
      }
      uVar5 = (ulong)__dest | 1;
    }
    *param_1 = uVar5;
  }
  return;
}


