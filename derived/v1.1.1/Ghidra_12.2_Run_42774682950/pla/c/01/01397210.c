/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01397210; name: FUN_01397210
 */


undefined8 FUN_01397210(long param_1)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  char local_58 [8];
  undefined1 auStack_50 [8];
  undefined8 local_48;
  char local_40 [16];
  undefined8 local_30;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_0114924c(&local_28);
  bVar1 = *(byte *)(param_1 + 0xe);
  if ((bVar1 & 1) == 0) {
joined_r0x013972b0:
    if ((bVar1 >> 2 & 1) != 0) {
      FUN_01121aac(local_40,local_28,param_1);
      if (local_40[0] == '\0') {
LAB_0139732c:
        bVar2 = false;
      }
      else {
        local_48 = local_30;
        FUN_0275d180(local_58);
        if (local_58[0] != '\0') {
          uVar5 = FUN_0275d1c0(&local_48);
          uVar6 = FUN_0275d1c0(auStack_50);
          if (((((uVar6 ^ uVar5) & 0xffff) == 0) && (((uVar6 ^ uVar5) >> 0x18 & 0xff) == 0)) &&
             (((uint)uVar6 & 0xff0000) << 8 == ((uint)uVar5 & 0xff0000) << 8)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (local_58[0] != '\0') {
            local_58[0] = '\0';
          }
          if (!bVar2) goto LAB_0139732c;
        }
        bVar2 = true;
      }
      if (local_40[0] != '\0') {
        local_40[0] = '\0';
      }
      if (bVar2) goto LAB_01397280;
    }
    uVar7 = 1;
    plVar3 = local_28;
  }
  else {
    uVar5 = FUN_0112194c(local_28,param_1);
    if ((uVar5 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 0xe);
      goto joined_r0x013972b0;
    }
LAB_01397280:
    uVar7 = 0;
    plVar3 = local_28;
  }
  if ((plVar3 != (long *)0x0) && (uVar5 = FUN_02a43a5c(plVar3[0xb]), (uVar5 & 1) != 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  return uVar7;
}


