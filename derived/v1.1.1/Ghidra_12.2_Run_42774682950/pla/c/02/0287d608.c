/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0287d608; name: FUN_0287d608
 */


void FUN_0287d608(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *__s1;
  long lVar9;
  
  puVar4 = PTR_DAT_0437b160;
  FUN_02880c18(*(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0xe8));
  puVar1 = PTR_DAT_04379d30;
  if (((*PTR_DAT_04379d30 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379d30);
  }
  puVar3 = PTR_DAT_04379d40;
  puVar2 = PTR_DAT_04379d38;
  uVar7 = *(undefined8 *)PTR_DAT_04379d38;
  *(undefined8 *)PTR_DAT_04379d40 = uVar7;
  FUN_02a79754(uVar7,0x10000);
  FUN_02880ce0(*(undefined8 *)(*(long *)puVar4 + 0x188));
  FUN_02880da8(*(undefined8 *)(*(long *)puVar4 + 0x188));
  FUN_02880e70(*(undefined8 *)(*(long *)puVar4 + 0x188));
  uVar5 = nn::os::GetHostArgc();
  puVar8 = (undefined8 *)nn::os::GetHostArgv();
  if (1 < (int)uVar5) {
    lVar9 = (ulong)uVar5 - 1;
    do {
      puVar8 = puVar8 + 1;
      __s1 = (char *)*puVar8;
      iVar6 = strcmp(__s1,"--noarchive");
      if ((iVar6 == 0) || (iVar6 = strcmp(__s1,"--NOARCHIVE"), iVar6 == 0)) {
        if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379d30);
        }
        lVar9 = *(long *)puVar2;
        *(long *)puVar3 = lVar9;
        *(undefined1 *)(lVar9 + 0x16b) = 1;
        return;
      }
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}


