/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02219d10; name: FUN_02219d10
 */


void FUN_02219d10(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  double dVar6;
  
  lVar2 = FUN_001511d0(param_1,2);
  puVar5 = *(undefined8 **)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437c708 != '\0') && (iVar1 = FUN_00155630(param_1,2,"class_cast"), iVar1 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar3 = FUN_00ea12ac();
    puVar5 = (undefined8 *)(*pcVar4)(puVar5,uVar3);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  dVar6 = (double)FUN_00150a90(param_1,3,0);
  pcVar4 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_3 + (param_2[1] >> 1)));
  }
  (*pcVar4)(*puVar5,(float)dVar6);
  FUN_0014ff10(param_1,0);
  return;
}


