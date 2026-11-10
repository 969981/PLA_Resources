/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023bb000; name: FUN_023bb000
 */


void FUN_023bb000(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  double dVar7;
  
  lVar2 = FUN_001511d0(param_1,1);
  lVar2 = *(long *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_04386b28 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_023baa6c();
    lVar2 = (*pcVar5)(lVar2,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  lVar3 = FUN_001511d0(param_1,2);
  puVar6 = *(undefined8 **)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437c708 != '\0') && (iVar1 = FUN_00155630(param_1,2,"class_cast"), iVar1 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_00ea12ac();
    puVar6 = (undefined8 *)(*pcVar5)(puVar6,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  dVar7 = (double)FUN_00150a90(param_1,3,0);
  pcVar5 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(lVar2 + (param_2[1] >> 1)));
  }
  (*pcVar5)(*puVar6,(float)dVar7);
  FUN_0014ff10(param_1,0);
  return;
}


