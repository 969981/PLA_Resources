/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154ec0; name: FUN_00154ec0
 */


void FUN_00154ec0(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  uVar1 = param_1[3];
  FUN_001514f0(uVar1,*param_1,param_1[2]);
  if ((undefined8 *)*param_1 != param_1 + 4) {
    pcVar2 = (code *)FUN_00153500(uVar1,&local_28);
    puVar3 = (undefined8 *)FUN_001511d0(uVar1,0xfffffffe);
    uVar4 = (*pcVar2)(local_28,*puVar3,puVar3[1],0);
    *puVar3 = uVar4;
    puVar3[1] = 0;
    FUN_0014ff70(uVar1,0xfffffffe,0xffffffff);
    FUN_0014ff10(uVar1,0xfffffffe);
  }
  return;
}


