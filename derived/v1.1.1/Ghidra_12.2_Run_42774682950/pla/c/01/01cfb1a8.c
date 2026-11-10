/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cfb1a8; name: FUN_01cfb1a8
 */


void FUN_01cfb1a8(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  FUN_01cfb3dc();
  *param_1 = &PTR_LAB_0424e998;
  param_1[9] = &PTR_LAB_0424e9e8;
  param_1[10] = &PTR_LAB_0424ea30;
  param_1[0x17] = &DAT_cbf29ce484222645;
  param_1[0x18] = &DAT_03996322;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  puVar2 = PTR_DAT_04379520;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar3 = PTR_DAT_04379528;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar4 = DAT_043f1798;
  lVar1 = tpidr_el0;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar1 + 0x20), *(long *)(lVar1 + 0x20) == 0)) {
    *(long *)(lVar1 + 0x20) = DAT_043f1798;
    lVar6 = lVar4;
  }
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1e] = lVar6;
  param_1[0x1f] = 0x1745d1745d1745d;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined1 *)((long)param_1 + 300) = 0;
  if (((*puVar2 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar2 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  lVar4 = DAT_043f1798;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar1 + 0x20), *(long *)(lVar1 + 0x20) == 0)) {
    *(long *)(lVar1 + 0x20) = DAT_043f1798;
    lVar6 = lVar4;
  }
  param_1[0x29] = lVar6;
  param_1[0x2a] = 0xfffffffffffffff;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_01cfb640(param_1,param_2);
  return;
}


