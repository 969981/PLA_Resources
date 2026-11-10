/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aeaa88; name: FUN_02aeaa88
 */


void FUN_02aeaa88(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  
  FUN_02acf2b0(param_2);
  pcVar3 = *(code **)(param_1 + 0x368);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
    (*pcVar3)(param_1 + 0x380);
  }
  *(undefined1 **)(param_1 + 0x360) = &LAB_02aecd94;
  *(undefined1 **)(param_1 + 0x368) = &LAB_02aecee0;
  *(undefined1 **)(param_1 + 0x370) = &LAB_02aed204;
  *(long *)(param_1 + 0x380) = param_1;
  *(undefined1 **)(param_1 + 0x378) = &LAB_02aed210;
  if (((*PTR_DAT_0437b680 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437b680), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_0437e478,PTR_DAT_0437b688,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b680);
  }
  lVar4 = *(long *)PTR_DAT_0437b688;
  *(long *)PTR_DAT_0437b690 = lVar4;
  FUN_02a40584(*(undefined8 *)(lVar4 + 0x68),param_1 + 0x350);
  FUN_02aeaba8(param_1);
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  for (puVar5 = *(undefined8 **)(param_1 + 0x60); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    (**(code **)(*(long *)*puVar5 + 0x78))((long *)*puVar5,param_2);
  }
  return;
}


