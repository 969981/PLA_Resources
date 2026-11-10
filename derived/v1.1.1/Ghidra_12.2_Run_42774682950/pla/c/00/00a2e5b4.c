/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a2e5b4; name: FUN_00a2e5b4
 */


void FUN_00a2e5b4(undefined8 *param_1,long *param_2,size_t param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  byte *__s;
  undefined1 *puVar7;
  byte *pbVar8;
  
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (*param_2 != 0) {
    puVar1 = (undefined8 *)(*param_2 + 0x60);
  }
  __s = (byte *)*puVar1;
  if (__s == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar6 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar5 = PTR_DAT_0437a0d8;
    uVar2 = *(undefined8 *)(PTR_DAT_0437a0d8 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_0437a0d8;
    param_1[1] = uVar2;
    plVar3 = *(long **)(puVar5 + 0x18);
    param_1[2] = *(undefined8 *)(puVar5 + 0x10);
    param_1[3] = plVar3;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a2e628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))();
      return;
    }
  }
  else {
    if (param_3 == 0) {
      param_3 = strlen((char *)__s);
    }
    puVar7 = &DAT_cbf29ce484222645;
    bVar4 = *__s;
    pbVar8 = __s;
    while (bVar4 != 0) {
      pbVar8 = pbVar8 + 1;
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar8;
    }
    *param_1 = puVar7;
    param_1[1] = __s;
    param_1[2] = param_3;
    param_1[3] = 0;
  }
  return;
}


