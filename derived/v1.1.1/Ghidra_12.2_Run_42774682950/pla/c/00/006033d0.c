/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006033d0; name: FUN_006033d0
 */


void FUN_006033d0(long *param_1,undefined1 (*param_2) [16])

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = *param_1;
  if (lVar3 != 0x7fffffffffffffff) {
    lVar2 = FUN_002eefd0(1);
    if ((-1000000 < lVar3) && (lVar1 = lVar3 / 1000000, lVar1 < lVar2)) {
      *(long *)*param_2 = lVar1;
      *(int *)(*param_2 + 8) = ((int)lVar3 + (int)lVar1 * -1000000) * 1000;
      *(undefined4 *)(*param_2 + 0xc) = 1;
      return;
    }
  }
  auVar4 = FUN_002eefd0(1);
  *param_2 = auVar4;
  return;
}


