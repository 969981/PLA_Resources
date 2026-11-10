/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0140c960; name: FUN_0140c960
 */


void FUN_0140c960(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  void *__s;
  long lVar3;
  
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x3c8,8);
  if (__s == (void *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    memset(__s,0,0x3c8);
    *(undefined8 *)((long)__s + 0x5c) = 0;
    *(undefined8 *)((long)__s + 0x50) = 0;
    *(undefined1 *)((long)__s + 0x14) = 0x12;
    *(undefined4 *)((long)__s + 0x18) = 5;
    *(undefined1 *)((long)__s + 0x58) = 0;
    *(undefined8 *)((long)__s + 0x20) = 0xc0ea47549ab5f3d9;
    *(undefined1 **)((long)__s + 0x28) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0x68) = 0;
    *(undefined4 *)((long)__s + 0x70) = 0;
    *(undefined1 *)((long)__s + 0x74) = 0x12;
    *(undefined4 *)((long)__s + 0x78) = 5;
    *(undefined8 *)((long)__s + 0xbc) = 0;
    *(undefined1 *)((long)__s + 0xb8) = 0;
    *(undefined1 **)((long)__s + 0x90) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 200) = 0;
    *(undefined4 *)((long)__s + 0xd0) = 0;
    *(undefined1 *)((long)__s + 0xd4) = 0x12;
    *(undefined4 *)((long)__s + 0xd8) = 5;
    *(undefined1 **)((long)__s + 0x30) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0x38) = 0;
    *(undefined8 *)((long)__s + 0x40) = 0;
    *(undefined8 *)((long)__s + 0x48) = 0;
    *(undefined8 *)((long)__s + 0x80) = 0xc0ea47549ab5f3d9;
    *(undefined1 **)((long)__s + 0x88) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0xa8) = 0;
    *(undefined8 *)((long)__s + 0xb0) = 0;
    *(undefined8 *)((long)__s + 0x98) = 0;
    *(undefined8 *)((long)__s + 0xa0) = 0;
    *(undefined8 *)((long)__s + 0xe0) = 0xc0ea47549ab5f3d9;
    *(undefined1 **)((long)__s + 0xe8) = &DAT_cbf29ce484222645;
    *(undefined1 **)((long)__s + 0xf0) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0xf8) = 0;
    *(undefined8 *)((long)__s + 0x11c) = 0;
    *(undefined8 *)((long)__s + 0x110) = 0;
    *(undefined1 *)((long)__s + 0x118) = 0;
    *(undefined8 *)((long)__s + 0x128) = 0;
    *(undefined4 *)((long)__s + 0x130) = 0;
    *(undefined1 *)((long)__s + 0x134) = 0x12;
    *(undefined4 *)((long)__s + 0x138) = 5;
    *(undefined8 *)((long)__s + 0x100) = 0;
    *(undefined8 *)((long)__s + 0x108) = 0;
    *(undefined8 *)((long)__s + 0x140) = 0xc0ea47549ab5f3d9;
    *(undefined1 **)((long)__s + 0x148) = &DAT_cbf29ce484222645;
    *(undefined1 **)((long)__s + 0x150) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0x158) = 0;
    *(undefined8 *)((long)__s + 0x17c) = 0;
    *(undefined1 *)((long)__s + 0x178) = 0;
    *(undefined8 *)((long)__s + 0x160) = 0;
    *(undefined8 *)((long)__s + 0x188) = 0;
    *(undefined4 *)((long)__s + 400) = 0;
    *(undefined1 *)((long)__s + 0x194) = 0x12;
    *(undefined4 *)((long)__s + 0x198) = 5;
    *(undefined8 *)((long)__s + 0x168) = 0;
    *(undefined8 *)((long)__s + 0x170) = 0;
    *(undefined8 *)((long)__s + 0x1a0) = 0xc0ea47549ab5f3d9;
    *(undefined1 **)((long)__s + 0x1a8) = &DAT_cbf29ce484222645;
    *(undefined1 **)((long)__s + 0x1b0) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0x1b8) = 0;
    *(undefined8 *)((long)__s + 0x1dc) = 0;
    *(undefined1 *)((long)__s + 0x1d8) = 0;
    *(undefined8 *)((long)__s + 0x1c0) = 0;
    *(undefined8 *)((long)__s + 0x1e8) = 0;
    *(undefined4 *)((long)__s + 0x1f0) = 0;
    *(undefined1 *)((long)__s + 500) = 0x12;
    *(undefined4 *)((long)__s + 0x1f8) = 5;
    *(undefined8 *)((long)__s + 0x200) = 0xc0ea47549ab5f3d9;
    *(undefined1 **)((long)__s + 0x208) = &DAT_cbf29ce484222645;
    *(undefined1 **)((long)__s + 0x210) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0x1c8) = 0;
    *(undefined8 *)((long)__s + 0x1d0) = 0;
    *(undefined8 *)((long)__s + 0x23c) = 0;
    *(undefined1 *)((long)__s + 0x238) = 0;
    *(undefined8 *)((long)__s + 0x230) = 0;
    *(undefined8 *)((long)__s + 0x228) = 0;
    *(undefined8 *)((long)__s + 0x220) = 0;
    *(undefined8 *)((long)__s + 0x218) = 0;
    *(undefined8 *)((long)__s + 0x248) = 0;
    *(undefined4 *)((long)__s + 0x250) = 0;
    *(undefined1 *)((long)__s + 0x254) = 0x12;
    *(undefined4 *)((long)__s + 600) = 5;
    *(undefined8 *)((long)__s + 0x260) = 0xc0ea47549ab5f3d9;
    *(undefined1 **)((long)__s + 0x268) = &DAT_cbf29ce484222645;
    *(undefined1 **)((long)__s + 0x270) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0x29c) = 0;
    *(undefined1 *)((long)__s + 0x298) = 0;
    *(undefined8 *)((long)__s + 0x290) = 0;
    *(undefined8 *)((long)__s + 0x288) = 0;
    *(undefined8 *)((long)__s + 0x280) = 0;
    *(undefined8 *)((long)__s + 0x278) = 0;
    *(undefined8 *)((long)__s + 0x2a8) = 0;
    *(undefined4 *)((long)__s + 0x2b0) = 0;
    *(undefined1 *)((long)__s + 0x2b4) = 0x12;
    *(undefined4 *)((long)__s + 0x2b8) = 5;
    *(undefined8 *)((long)__s + 0x2c0) = 0xc0ea47549ab5f3d9;
    *(undefined1 **)((long)__s + 0x2c8) = &DAT_cbf29ce484222645;
    *(undefined1 **)((long)__s + 0x2d0) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0x2fc) = 0;
    *(undefined1 *)((long)__s + 0x2f8) = 0;
    *(undefined8 *)((long)__s + 0x2f0) = 0;
    *(undefined8 *)((long)__s + 0x2e8) = 0;
    *(undefined8 *)((long)__s + 0x2e0) = 0;
    *(undefined8 *)((long)__s + 0x2d8) = 0;
    *(undefined8 *)((long)__s + 0x308) = 0;
    *(undefined4 *)((long)__s + 0x310) = 0;
    *(undefined1 *)((long)__s + 0x314) = 0x12;
    *(undefined4 *)((long)__s + 0x318) = 5;
    *(undefined8 *)((long)__s + 800) = 0xc0ea47549ab5f3d9;
    *(undefined1 **)((long)__s + 0x328) = &DAT_cbf29ce484222645;
    *(undefined1 **)((long)__s + 0x330) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0x35c) = 0;
    *(undefined1 *)((long)__s + 0x374) = 0x12;
    *(undefined1 *)((long)__s + 0x358) = 0;
    *(undefined8 *)((long)__s + 0x350) = 0;
    *(undefined8 *)((long)__s + 0x348) = 0;
    *(undefined8 *)((long)__s + 0x340) = 0;
    *(undefined8 *)((long)__s + 0x338) = 0;
    *(undefined8 *)((long)__s + 0x368) = 0;
    *(undefined4 *)((long)__s + 0x370) = 0;
    *(undefined4 *)((long)__s + 0x378) = 5;
    *(undefined8 *)((long)__s + 0x380) = 0xc0ea47549ab5f3d9;
    *(undefined1 **)((long)__s + 0x388) = &DAT_cbf29ce484222645;
    *(undefined1 **)((long)__s + 0x390) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0x3bc) = 0;
    *(undefined1 *)((long)__s + 0x3b8) = 0;
    *(undefined8 *)((long)__s + 0x3b0) = 0;
    *(undefined8 *)((long)__s + 0x3a8) = 0;
    *(undefined8 *)((long)__s + 0x3a0) = 0;
    *(undefined8 *)((long)__s + 0x398) = 0;
    *param_1 = __s;
    param_1[1] = param_2;
    param_1[2] = 0x3c8;
    param_1[3] = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


