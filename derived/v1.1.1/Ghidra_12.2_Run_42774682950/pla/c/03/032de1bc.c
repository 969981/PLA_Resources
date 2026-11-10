/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032de1bc; name: FUN_032de1bc
 */


undefined8 FUN_032de1bc(ulong *param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [520];
  long local_78;
  undefined8 local_70;
  
  puVar4 = PTR_PTR_0434a090;
  local_78 = 0;
  local_70 = -0x8000000000000000;
  puVar6 = param_1;
  do {
    uVar8 = (uint)*puVar6;
    if ((uVar8 >> 0x14 & 1) != 0) {
      if ((puVar6 != (ulong *)0x0) &&
         (uVar8 = (uVar8 & 0xfffff) - (uVar8 >> 1 & 0x55555),
         uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333),
         uVar2 = (ushort)puVar6[(ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2]
         , uVar2 != 0)) {
        lVar10 = FUN_032bd1d4(PTR_PTR_0434a090,uVar2,1,0,0,(long)&local_70 + 4);
        lVar7 = (long)(int)(uint)local_70;
        uVar8 = (uint)uVar2;
        local_78 = lVar10;
        if ((int)(uint)local_70 < (int)(uint)uVar2) {
          uVar3 = ~(uint)local_70;
          local_70 = CONCAT44(local_70._4_4_,uVar8);
          memset((void *)(lVar10 + lVar7),0,(ulong)(uVar8 + uVar3) + 1);
        }
        else if ((int)(uint)uVar2 < (int)(uint)local_70) {
          local_70 = CONCAT44(local_70._4_4_,uVar8);
        }
        goto LAB_032de268;
      }
      break;
    }
  } while (((*puVar6 & 1) == 0) && (puVar6 = (ulong *)puVar6[1], puVar6 != (ulong *)0x0));
  lVar10 = 0;
LAB_032de268:
  puVar6 = param_1;
  while( true ) {
    uVar8 = (uint)*puVar6;
    if ((uVar8 >> 0x16 & 1) != 0) break;
    if (((*puVar6 & 1) != 0) || (puVar6 = (ulong *)puVar6[1], puVar6 == (ulong *)0x0))
    goto LAB_032de3cc;
  }
  if ((puVar6 != (ulong *)0x0) &&
     (uVar8 = (uVar8 & 0x3fffff) - (uVar8 >> 1 & 0x155555),
     uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333),
     pcVar12 = (code *)puVar6[(ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
     pcVar12 != (code *)0x0)) goto LAB_032de2c0;
LAB_032de3cc:
  puVar6 = param_1;
  while( true ) {
    uVar8 = (uint)*puVar6;
    if ((uVar8 >> 6 & 1) != 0) break;
    if (((*puVar6 & 1) != 0) || (puVar6 = (ulong *)puVar6[1], puVar6 == (ulong *)0x0))
    goto LAB_032de424;
  }
  if ((puVar6 != (ulong *)0x0) &&
     (uVar8 = (uVar8 & 0x3f) - (uVar8 >> 1 & 0x15),
     uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333),
     pcVar12 = (code *)puVar6[(ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2],
     pcVar12 != (code *)0x0)) goto LAB_032de2c0;
LAB_032de424:
  FUN_0331fefc(auStack_290,auStack_280,0x200);
  FUN_0332448c(auStack_290,
               "Attempted to get the vtable from a non-constructible type, it must have either an accessible default constructor or a bypass constructor"
              );
  FUN_03320af0(0xabbac0ae,auStack_280,
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Core/Detail/hkReflectTypeDetail.cpp"
               ,0xf6);
  FUN_0331ff7c(auStack_290);
  uVar11 = 0x80040200;
  goto LAB_032de398;
LAB_032de2c0:
  uVar5 = FUN_032e225c(param_1,&DAT_043568f0);
  if ((uVar5 & 1) == 0) {
    (*pcVar12)(lVar10,param_1,1);
  }
  else {
    uVar11 = *(undefined8 *)(lVar10 + 8);
    (*pcVar12)(lVar10,param_1,1);
    *(undefined8 *)(lVar10 + 8) = uVar11;
  }
  puVar6 = param_1;
  if (0 < (int)param_2[1]) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      plVar1 = (long *)(*param_2 + lVar7);
      lVar7 = lVar7 + 0x10;
      plVar1[1] = *(long *)(*plVar1 + lVar10);
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)param_2[1]);
  }
  while( true ) {
    uVar8 = (uint)*puVar6;
    if ((uVar8 >> 8 & 1) != 0) break;
    if (((*puVar6 & 1) != 0) || (puVar6 = (ulong *)puVar6[1], puVar6 == (ulong *)0x0))
    goto LAB_032de394;
  }
  if ((puVar6 != (ulong *)0x0) &&
     (uVar8 = (uVar8 & 0xff) - (uVar8 >> 1 & 0x55),
     uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333),
     (code *)puVar6[(ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] !=
     (code *)0x0)) {
    (*(code *)puVar6[(ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2])
              (lVar10,param_1,1);
  }
LAB_032de394:
  uVar11 = 0;
LAB_032de398:
  lVar7 = local_70;
  uVar8 = local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar7) && (lVar10 != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,lVar10,uVar8 & 0x3fffffff);
  }
  return uVar11;
}


