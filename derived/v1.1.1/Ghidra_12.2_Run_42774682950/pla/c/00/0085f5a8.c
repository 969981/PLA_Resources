/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085f5a8; name: FUN_0085f5a8
 */


void FUN_0085f5a8(long param_1,ushort *param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar3 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0xb8);
      plVar5 = (long *)(lVar4 + uVar3 * 0x78 + 0x10);
      if (*plVar5 != -1) {
        if (*param_2 == 0) {
LAB_0085f5dc:
          lVar4 = lVar4 + uVar3 * 0x78;
          *plVar5 = -1;
          *(undefined8 *)(lVar4 + 0x18) = 0;
          *(undefined4 *)(lVar4 + 0x20) = 0;
          FUN_007e4488(lVar4 + 0x28);
          FUN_007e4488(lVar4 + 0x48);
          *(undefined2 *)(lVar4 + 0x68) = 0;
        }
        else {
          uVar2 = 0;
          plVar1 = (long *)FUN_0085e904(param_2,0);
          if (plVar1 != (long *)0x0) goto LAB_0085f660;
          do {
            do {
              uVar2 = uVar2 + 1;
              if (*param_2 <= uVar2) goto LAB_0085f5dc;
              plVar1 = (long *)FUN_0085e904(param_2,uVar2);
            } while (plVar1 == (long *)0x0);
LAB_0085f660:
          } while (*plVar1 != *plVar5);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xc0));
  }
  return;
}


