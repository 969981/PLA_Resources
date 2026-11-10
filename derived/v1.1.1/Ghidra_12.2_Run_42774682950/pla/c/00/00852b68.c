/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00852b68; name: FUN_00852b68
 */


/* WARNING: Removing unreachable block (ram,0x00852fb8) */
/* WARNING: Removing unreachable block (ram,0x00852df8) */
/* WARNING: Removing unreachable block (ram,0x00852f50) */
/* WARNING: Removing unreachable block (ram,0x00852e58) */
/* WARNING: Removing unreachable block (ram,0x00852eac) */
/* WARNING: Removing unreachable block (ram,0x00852f30) */
/* WARNING: Removing unreachable block (ram,0x00852f70) */
/* WARNING: Removing unreachable block (ram,0x00852ed0) */
/* WARNING: Removing unreachable block (ram,0x00852f60) */
/* WARNING: Removing unreachable block (ram,0x00852f40) */
/* WARNING: Removing unreachable block (ram,0x00852f80) */
/* WARNING: Removing unreachable block (ram,0x00852d34) */
/* WARNING: Removing unreachable block (ram,0x00852d44) */
/* WARNING: Removing unreachable block (ram,0x00852cd0) */

void FUN_00852b68(long param_1)

{
  void *__s;
  undefined *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 local_be8 [4];
  undefined *local_bd8;
  undefined2 local_bd0;
  undefined1 local_bce;
  undefined8 local_bcc;
  undefined1 auStack_bc4 [1436];
  int local_628 [5];
  undefined1 auStack_614 [1440];
  undefined1 auStack_74 [4];
  long local_70;
  undefined4 local_68 [2];
  
  uVar4 = FUN_0084f2ec(*(undefined8 *)(param_1 + 0x70));
  FUN_007f1af0(param_1 + 0x10,uVar4);
  puVar3 = PTR_DAT_043773c0;
  __s = (void *)(param_1 + 0x94);
  puVar1 = PTR_DAT_04378080 + 0x10;
LAB_00852c3c:
  FUN_00841494(local_628,param_1,&local_70,auStack_614,auStack_74,0x5a0);
  if (local_628[0] == 0) {
    local_bd0 = 0;
    local_bce = 0;
    local_bcc = 0;
    local_bd8 = puVar1;
    memset(auStack_bc4,0,0x595);
    FUN_00853c2c(local_be8,&local_bd8,auStack_614,0x5a0);
    FUN_007ee660(local_628,local_be8);
    if (local_628[0] != 0) goto LAB_00852c30;
    FUN_00854df4(local_be8,*(undefined8 *)puVar3,local_68,local_70);
    FUN_007ee660(local_628,local_be8);
    if (local_628[0] != 0) goto LAB_00852c3c;
    switch((undefined1)local_bd0) {
    case 0:
      if ((*(uint *)(param_1 + 0x78) < 0xb) &&
         ((1 << (ulong)(*(uint *)(param_1 + 0x78) & 0x1f) & 0x736U) != 0)) {
        *(undefined1 *)(param_1 + (ulong)(byte)local_68[0]._0_1_ + 0xcb) = 1;
      }
      else {
        *(char *)(param_1 + (ulong)(byte)local_68[0]._0_1_ + 0x94) = local_bd0._1_1_;
        if ((uint)local_bcc < *(uint *)(param_1 + 0xac)) {
          *(uint *)(param_1 + 0xac) = (uint)local_bcc;
        }
      }
      goto LAB_00852c3c;
    case 1:
      bVar2 = false;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined1 *)(param_1 + 0xca) = 0;
      if (*(int *)(param_1 + 0x78) == 4) {
        *(undefined4 *)(param_1 + 0x78) = 5;
        if (*(char *)(param_1 + 0xb1) == local_bd0._1_1_) goto LAB_00852d98;
        goto LAB_00852c3c;
      }
      goto LAB_00852c34;
    case 2:
      if ((*(int *)(param_1 + 0x78) != 5) || (*(char *)(param_1 + 0xb1) != local_bd0._1_1_))
      goto LAB_00852c3c;
LAB_00852d98:
      if (*(long *)(param_1 + 0xc0) != local_70) goto LAB_00852c3c;
      if (*(long *)(param_1 + 0x88) == 0) break;
      if (local_bcc._4_4_ + *(uint *)(param_1 + 0xb8) <= *(uint *)(param_1 + 0x90)) {
        memcpy((void *)((ulong)*(uint *)(param_1 + 0xb8) + *(long *)(param_1 + 0x88)),auStack_bc4,
               (ulong)local_bcc._4_4_);
        *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + local_bcc._4_4_;
        *(undefined1 *)(param_1 + 0xca) = local_bce;
        goto LAB_00852c3c;
      }
      break;
    case 3:
      if (*(int *)(param_1 + 0x78) == 4) {
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined2 *)(param_1 + 0xb0) = 0xffff;
        *(undefined8 *)(param_1 + 0xb4) = 0;
        *(undefined8 *)(param_1 + 0xc0) = 0;
        *(undefined2 *)(param_1 + 200) = 0;
        *(undefined1 *)(param_1 + 0xca) = 0;
        memset(__s,0xff,0x18);
        *(undefined4 *)(param_1 + 0x78) = 7;
      }
      goto LAB_00852c3c;
    case 4:
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined2 *)(param_1 + 0xb0) = 0xffff;
      *(undefined8 *)(param_1 + 0xb4) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined2 *)(param_1 + 200) = 0;
      *(undefined1 *)(param_1 + 0xca) = 0;
      memset(__s,0xff,0x18);
      *(undefined4 *)(param_1 + 0x78) = 0xc;
      goto LAB_00852c3c;
    case 5:
      *(undefined1 *)(param_1 + (ulong)(byte)local_68[0]._0_1_ + 0x94) = 0xff;
      *(undefined1 *)(param_1 + (ulong)(byte)local_68[0]._0_1_ + 0xe3) = 1;
      goto LAB_00852c3c;
    case 6:
      if (*(int *)(param_1 + 0x78) == 10) {
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined2 *)(param_1 + 0xb0) = 0xffff;
        *(undefined8 *)(param_1 + 0xb4) = 0;
        *(undefined8 *)(param_1 + 0xc0) = 0;
        *(undefined2 *)(param_1 + 200) = 0;
        *(undefined1 *)(param_1 + 0xca) = 0;
        memset(__s,0xff,0x18);
        *(undefined4 *)(param_1 + 0x78) = 0xb;
      }
    default:
      goto LAB_00852c3c;
    }
  }
  else {
    local_bd8 = (undefined *)CONCAT44(local_bd8._4_4_,0x2c09);
    local_be8[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_bd8 | 4),(Result *)local_be8);
    if (local_628[0] != (int)local_bd8) {
      local_be8[0] = 0x2c03;
      local_68[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_be8 | 4),(Result *)local_68);
    }
  }
LAB_00852c30:
  bVar2 = true;
LAB_00852c34:
  if (bVar2) {
    return;
  }
  goto LAB_00852c3c;
}


