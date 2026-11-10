/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00580e50; name: FUN_00580e50
 */


bool FUN_00580e50(ulong *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  void *__src;
  undefined8 *puVar8;
  byte *__dest;
  ulong uVar9;
  undefined8 *local_60;
  long local_58;
  
  puVar2 = (ulong *)FUN_00580d68();
  local_58 = 0;
  uVar3 = FUN_00580600(param_1,&local_58);
  if (((uVar3 & 1) != 0) && (local_58 == 0)) {
    *param_2 = puVar2;
    return true;
  }
  if (((DAT_0439ee28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0439ee28), iVar1 != 0)) {
    DAT_0439ee20 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    if (DAT_0439ee20 != (undefined8 *)0x0) {
      DAT_0439ee20[1] = 0;
      *DAT_0439ee20 = 0;
      DAT_0439ee20[3] = 0;
      DAT_0439ee20[2] = 0;
      *(undefined2 *)DAT_0439ee20 = 1;
      *(undefined1 *)((long)DAT_0439ee20 + 2) = 0;
    }
    __cxa_guard_release(&DAT_0439ee28);
  }
  std::mutex::lock();
                    /* try { // try from 00580ecc to 00580ed3 has its CatchHandler @ 00581194 */
  if ((DAT_0439edf8 != (undefined8 *)0x0) &&
     (lVar4 = FUN_00581774(DAT_0439edf8,param_1), lVar4 != 0)) {
    *param_2 = *(undefined8 *)(lVar4 + 0x28);
    puVar6 = *(ulong **)(lVar4 + 0x28);
    goto LAB_005810b0;
  }
  std::mutex::unlock();
  if (((DAT_0439ee28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0439ee28), iVar1 != 0)) {
    DAT_0439ee20 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    if (DAT_0439ee20 != (undefined8 *)0x0) {
      DAT_0439ee20[1] = 0;
      *DAT_0439ee20 = 0;
      DAT_0439ee20[3] = 0;
      DAT_0439ee20[2] = 0;
      *(undefined2 *)DAT_0439ee20 = 1;
      *(undefined1 *)((long)DAT_0439ee20 + 2) = 0;
    }
    __cxa_guard_release(&DAT_0439ee28);
  }
  std::mutex::lock();
  if ((DAT_0439edf8 == (undefined8 *)0x0) &&
     (DAT_0439edf8 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x28),
     DAT_0439edf8 != (undefined8 *)0x0)) {
    *(undefined4 *)(DAT_0439edf8 + 4) = 0x3f800000;
    DAT_0439edf8[1] = 0;
    *DAT_0439edf8 = 0;
    DAT_0439edf8[3] = 0;
    DAT_0439edf8[2] = 0;
  }
                    /* try { // try from 00580f38 to 00580f3f has its CatchHandler @ 00581190 */
  puVar5 = (undefined8 *)FUN_005811a8(DAT_0439edf8,param_1);
  puVar6 = (ulong *)*puVar5;
  if (puVar6 == (ulong *)0x0) {
    puVar6 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    if (puVar6 != (ulong *)0x0) {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      if ((*param_1 & 1) == 0) {
        uVar9 = param_1[1];
        uVar3 = *param_1;
        puVar6[2] = param_1[2];
        puVar6[1] = uVar9;
        *puVar6 = uVar3;
      }
      else {
        uVar3 = param_1[1];
        if (0xffffffffffffffef < uVar3) {
                    /* try { // try from 00581180 to 00581187 has its CatchHandler @ 00581188 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        __src = (void *)param_1[2];
        if (uVar3 < 0x17) {
          __dest = (byte *)((long)puVar6 + 1);
          *(byte *)puVar6 = (byte)((int)uVar3 << 1);
          if (uVar3 != 0) goto LAB_00580fdc;
        }
        else {
          uVar9 = uVar3 + 0x10 & 0xfffffffffffffff0;
          __dest = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar9);
          *puVar6 = uVar9 | 1;
          puVar6[1] = uVar3;
          puVar6[2] = (ulong)__dest;
LAB_00580fdc:
          memcpy(__dest,__src,uVar3);
        }
        __dest[uVar3] = 0;
      }
      puVar6[3] = 0;
    }
                    /* try { // try from 00580ff4 to 00580fff has its CatchHandler @ 0058118c */
    FUN_00581f1c(&local_60,puVar6);
    puVar7 = local_60;
    local_60 = (undefined8 *)0x0;
    puVar8 = (undefined8 *)puVar6[3];
    puVar6[3] = (ulong)puVar7;
    if (puVar8 == (undefined8 *)0x0) {
      local_60 = (undefined8 *)0x0;
    }
    else {
      (**(code **)*puVar8)(puVar8);
      FUN_002e2ea0(PTR_LAB_04373088,puVar8);
      puVar7 = local_60;
      local_60 = (undefined8 *)0x0;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7);
        FUN_002e2ea0(PTR_LAB_04373088,puVar7);
      }
      puVar7 = (undefined8 *)puVar6[3];
    }
    if (puVar7 == (undefined8 *)0x0) {
      puVar6[3] = 0;
      if ((*puVar6 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,puVar6[2]);
      }
      FUN_002e2ea0(PTR_LAB_04373088,puVar6);
      puVar6 = puVar2;
    }
    *puVar5 = puVar6;
  }
  *param_2 = puVar6;
  puVar6 = (ulong *)*puVar5;
LAB_005810b0:
  std::mutex::unlock();
  return puVar6 != puVar2;
}


