/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f05638; name: FUN_02f05638
 */


void FUN_02f05638(undefined4 param_1,long param_2,uint param_3,ulong param_4)

{
  ulong uVar1;
  ushort *puVar2;
  long *plVar3;
  bool bVar4;
  undefined4 uVar5;
  
  puVar2 = *(ushort **)(param_2 + 0x20);
  if (puVar2 != (ushort *)0x0) {
    uVar1 = 0;
    plVar3 = (long *)((long)puVar2 + ((ulong)((uint)*puVar2 * 2 + 5) & 0x3fffc) + 8);
    do {
      if ((uint)puVar2[uVar1 + 1] == (param_3 & 0xffff)) {
        uVar5 = (undefined4)plVar3[-1];
        *(undefined4 *)(plVar3 + -1) = param_1;
        if (((param_4 & 1) == 0) || (*plVar3 == 0)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
          *plVar3 = 0;
        }
        goto LAB_02f056c0;
      }
      uVar1 = uVar1 + 1;
      plVar3 = plVar3 + 2;
    } while (uVar1 < *puVar2);
  }
  bVar4 = false;
  uVar5 = 0x3f800000;
  if ((param_3 >> 0x10 & 0xff) != 3) {
    uVar5 = 0;
  }
LAB_02f056c0:
  if ((char)(*(long **)(param_2 + 0x18))[1] != '\0') {
    (**(code **)(**(long **)(param_2 + 0x18) + 0x48))(uVar5);
  }
  if (bVar4) {
                    /* WARNING: Could not recover jumptable at 0x02f05704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))();
    return;
  }
  return;
}


