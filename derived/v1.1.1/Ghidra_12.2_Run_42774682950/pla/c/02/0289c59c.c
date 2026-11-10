/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0289c59c; name: FUN_0289c59c
 */


void FUN_0289c59c(ulong *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  ulong *puVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar2 = (long *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (long *)0x0) {
    puVar3 = param_1;
    local_40 = param_3;
    uStack_38 = param_4;
    do {
      if ((plVar2[2] == param_2) &&
         (iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_40,0x10), iVar1 != 0)) {
        if ((*param_1 & 3) == 0) {
          *puVar3 = plVar2[1] & 0xfffffffffffffffcU | *puVar3 & 3;
          (**(code **)(*plVar2 + 8))(plVar2);
          return;
        }
        plVar2[1] = plVar2[1] & 0xfffffffffffffffcU | 1;
        return;
      }
      puVar3 = (ulong *)(plVar2 + 1);
      plVar2 = (long *)(*puVar3 & 0xfffffffffffffffc);
    } while (plVar2 != (long *)0x0);
  }
  return;
}


