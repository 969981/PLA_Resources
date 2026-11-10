/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008a718c; name: FUN_008a718c
 */


void FUN_008a718c(long param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined2 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined4 local_7c;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined4 local_6c;
  ulong local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *local_28;
  
  uVar6 = FUN_008a72e4();
  local_b0 = 0;
  uStack_b8 = 0;
  local_90 = *(undefined8 *)PTR_DAT_04379570;
  uStack_88 = *(undefined8 *)(PTR_DAT_04379570 + 8);
  local_80 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_7e = 0;
  local_6c = 0;
  local_68 = local_68 & 0xffffffffffffff00;
  local_7c = 0;
  uStack_78 = 0;
  uStack_76 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  local_50 = (ulong)local_50._4_4_ << 0x20;
  local_48 = 0;
  local_40 = CONCAT44(0x3f800000,(undefined4)local_40);
  local_60 = &DAT_cbf29ce484222645;
  local_58 = &DAT_cbf29ce484222645;
  local_40 = CONCAT71(local_40._1_7_,1);
  local_c0 = uVar6;
  lVar7 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),param_3);
  if (lVar7 != 0) {
    uVar8 = *(undefined8 *)(lVar7 + 200);
    uVar3 = *(undefined8 *)(lVar7 + 0xd0);
    local_68 = *(ulong *)(lVar7 + 0xd8);
    local_60 = *(undefined1 **)(lVar7 + 0xe0);
    uStack_78 = (undefined2)uVar8;
    uStack_76 = (undefined2)((ulong)uVar8 >> 0x10);
    uStack_74 = (undefined4)((ulong)uVar8 >> 0x20);
    uStack_70 = (undefined2)uVar3;
    uStack_6e = (undefined2)((ulong)uVar3 >> 0x10);
    local_6c = (undefined4)((ulong)uVar3 >> 0x20);
    local_58 = *(undefined1 **)(lVar7 + 0xe8);
    local_50 = *(long *)(lVar7 + 0xf0);
    local_48 = *(undefined8 *)(lVar7 + 0xf8);
    local_40 = *(undefined8 *)(lVar7 + 0x100);
  }
  uVar8 = FUN_00923bf8(*(undefined8 *)(param_1 + 0x68));
  FUN_009332a0(&local_28,uVar8,&local_c0);
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  FUN_008a7314(param_1,uVar6,0);
  return;
}


