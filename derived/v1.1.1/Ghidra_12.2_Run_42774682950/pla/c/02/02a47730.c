/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a47730; name: FUN_02a47730
 */


void FUN_02a47730(undefined8 *param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  char *__dest;
  long lVar4;
  byte *pbVar5;
  long *plVar6;
  undefined1 *puVar7;
  
  FUN_009318d0();
  *param_1 = &PTR_LAB_0427d410;
  param_1[9] = &PTR_LAB_0427d448;
  if (((*PTR_DAT_04379cd0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379cd0);
  }
  puVar7 = &DAT_cbf29ce484222645;
  lVar4 = *(long *)PTR_DAT_04379cd8;
  *(long *)PTR_DAT_04379ce0 = lVar4;
  plVar6 = *(long **)(lVar4 + 8);
  sVar3 = strlen(param_2);
  __dest = (char *)(**(code **)(*plVar6 + 0x10))(plVar6,sVar3 + 1,8);
  param_1[0xe] = __dest;
  strcpy(__dest,param_2);
  pbVar5 = (byte *)param_1[0xe];
  param_1[0xc] = pbVar5;
  bVar1 = *pbVar5;
  while (bVar1 != 0) {
    pbVar5 = pbVar5 + 1;
    puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar5;
  }
  param_1[0xb] = puVar7;
  param_1[0xd] = sVar3;
  return;
}


