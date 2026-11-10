/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b62410; name: FUN_02b62410
 */


undefined8 FUN_02b62410(long param_1)

{
  long *plVar1;
  ulong uVar2;
  size_t sVar3;
  int *piVar4;
  int *piVar5;
  int *__src;
  size_t __n;
  int *__dest;
  char local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_38;
  
  __src = *(int **)(param_1 + 0xa8);
  uVar2 = (ulong)*(byte *)(*(long *)(param_1 + 0x58) + 0x161);
  if (uVar2 != 0) {
    __dest = *(int **)(param_1 + 0xe0);
    __n = uVar2 << 2;
    sVar3 = __n;
    piVar4 = __dest;
    piVar5 = __src;
    do {
      if (*piVar5 != *piVar4) {
        FUN_02b5e718(local_58,*(long *)(param_1 + 0x58),param_1 + 0x98);
        if (*(char *)(param_1 + 0x118) == '\0') {
          if (local_58[0] == '\0') {
            return 0;
          }
          *(undefined8 *)(param_1 + 0x120) = local_50;
          *(undefined8 *)(param_1 + 0x128) = local_48;
          *(undefined8 *)(param_1 + 0x130) = local_40;
          *(long **)(param_1 + 0x138) = local_38;
          *(undefined1 *)(param_1 + 0x118) = 1;
        }
        else {
          if (local_58[0] == '\0') {
            if (*(long **)(param_1 + 0x138) != (long *)0x0) {
              (**(code **)(**(long **)(param_1 + 0x138) + 0x20))();
            }
            *(undefined1 *)(param_1 + 0x118) = 0;
            goto joined_r0x02b62578;
          }
          *(undefined8 *)(param_1 + 0x120) = local_50;
          *(undefined8 *)(param_1 + 0x128) = local_48;
          plVar1 = *(long **)(param_1 + 0x138);
          *(undefined8 *)(param_1 + 0x130) = local_40;
          *(undefined8 *)(param_1 + 0x138) = 0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 0x20))();
          }
          *(long **)(param_1 + 0x138) = local_38;
        }
        local_38 = (long *)0x0;
joined_r0x02b62578:
        if (local_58[0] != '\0') {
          if (local_38 != (long *)0x0) {
            (**(code **)(*local_38 + 0x20))();
          }
          local_58[0] = '\0';
        }
        if (*(char *)(param_1 + 0x118) == '\0') {
          return 0;
        }
        memmove(__dest,__src,__n);
        return 1;
      }
      piVar5 = piVar5 + 1;
      piVar4 = piVar4 + 1;
      sVar3 = sVar3 - 4;
    } while (sVar3 != 0);
  }
  return 1;
}


