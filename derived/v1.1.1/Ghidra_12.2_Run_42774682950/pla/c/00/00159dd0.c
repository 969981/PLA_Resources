/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00159dd0; name: FUN_00159dd0
 */


void FUN_00159dd0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + *(long *)(param_1 + 0xb0));
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = puVar3[-2];
    puVar3[1] = puVar3[-1];
    lVar4 = *(long *)(param_1 + 0x10);
    uVar2 = puVar1[1];
    *(undefined8 *)(lVar4 + -0x10) = *puVar1;
    *(undefined8 *)(lVar4 + -8) = uVar2;
    lVar4 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar4 + 0x10;
    FUN_0015b160(param_1,lVar4 + -0x10,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0015a320(param_1,2);
}


