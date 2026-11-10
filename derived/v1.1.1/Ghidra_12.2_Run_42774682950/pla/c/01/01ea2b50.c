/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea2b50; name: FUN_01ea2b50
 */


void FUN_01ea2b50(undefined8 *param_1,undefined8 param_2,long param_3)

{
  byte *__s;
  undefined8 uVar1;
  long *plVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  size_t sVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  
  __s = (byte *)(param_3 + 4);
  if (param_3 == 0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar4 = PTR_DAT_0437a0d8;
    uVar1 = *(undefined8 *)(PTR_DAT_0437a0d8 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_0437a0d8;
    param_1[1] = uVar1;
    plVar2 = *(long **)(puVar4 + 0x18);
    param_1[2] = *(undefined8 *)(puVar4 + 0x10);
    param_1[3] = plVar2;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01ea2bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  else {
    puVar8 = &DAT_cbf29ce484222645;
    sVar6 = strlen((char *)__s);
    bVar3 = *__s;
    if (bVar3 != 0) {
      pbVar7 = (byte *)(param_3 + 5);
      do {
        puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar3 != 0);
    }
    *param_1 = puVar8;
    param_1[1] = __s;
    param_1[2] = sVar6;
    param_1[3] = 0;
  }
  return;
}


