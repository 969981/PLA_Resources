/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0101f940; name: FUN_0101f940
 */


void FUN_0101f940(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_001511d0(param_1,1);
  uVar5 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437ab20 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar3 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00b3c2cc();
    uVar5 = (*pcVar3)(uVar5,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
                    /* WARNING: Could not recover jumptable at 0x0101f990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_2)(uVar5);
  return;
}


