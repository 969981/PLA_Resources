/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01734f90; name: FUN_01734f90
 */


void FUN_01734f90(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_001511d0(param_2,1);
  uVar3 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437acb0 != '\0') && (iVar1 = FUN_00155630(param_2,1,"class_cast"), iVar1 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_2,0xffffffff);
    uVar5 = FUN_00b4fc10();
    uVar3 = (*pcVar4)(uVar3,uVar5);
    FUN_0014ff10(param_2,0xfffffffe);
  }
                    /* WARNING: Could not recover jumptable at 0x01734fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(param_1,uVar3);
  return;
}


