/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e1554; name: FUN_007e1554
 */


void FUN_007e1554(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  void *__s;
  ulong uVar5;
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  if (param_3 == -1) {
    local_50[0] = 0x10407;
  }
  else {
    uVar1 = param_3 + 1;
    uVar5 = (ulong)uVar1;
    *(uint *)(param_2 + 0x68) = uVar1;
    uVar3 = FUN_007e336c();
    lVar4 = FUN_0081a750((uVar5 + (ulong)uVar1 * 2) * 8,uVar3);
    if (lVar4 != 0) {
      __s = (void *)(lVar4 + 0x10);
      do {
        memset(__s,0,4);
        *(undefined2 *)((long)__s + -0x10) = 0;
        *(undefined8 *)((long)__s + -8) = 0;
        memset(__s,0,4);
        uVar5 = uVar5 - 1;
        __s = (void *)((long)__s + 0x18);
      } while (uVar5 != 0);
    }
    *(long *)(param_2 + 0x60) = lVar4;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    puVar2 = PTR_DAT_043773b8;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    local_50[0] = 0;
    *(int *)(puVar2 + 0x440) = param_3;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
  FUN_007ee578(param_1,local_50);
  return;
}


