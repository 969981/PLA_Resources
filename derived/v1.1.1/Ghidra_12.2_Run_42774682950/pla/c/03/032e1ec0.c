/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e1ec0; name: FUN_032e1ec0
 */


void FUN_032e1ec0(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_178 [336];
  undefined8 local_28;
  
  local_28 = param_1;
  if ((1 < DAT_0444a398) || (uVar1 = FUN_03327170(), (uVar1 & 1) != 0)) {
    uVar1 = FUN_03327170();
    if ((uVar1 & 1) == 0) {
      FUN_03326994(auStack_178,&DAT_0444a348,2);
      lVar2 = FUN_03326338(auStack_178,
                           "Instances of a non-reflected class inheriting from {0} have been passed to reflection and will be treated as instances of their reflected ancestor. Mark subclasses of {0} as Reflect or NoReflect to suppress this warning."
                           ,PTR_DAT_043891f8,&local_28);
      *(undefined4 *)(lVar2 + 0x1c) = 0x34fdd456;
      *(char **)(lVar2 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Core/hkReflectType.cpp";
      *(undefined8 *)(lVar2 + 0x40) = 0x5a;
      FUN_033269dc(auStack_178);
    }
    else {
      FUN_03326a7c(auStack_178,&DAT_0444a348,2);
      lVar2 = FUN_03326338(auStack_178,
                           "Instances of a non-reflected class inheriting from {0} have been passed to reflection and will be treated as instances of their reflected ancestor. Mark subclasses of {0} as Reflect or NoReflect to suppress this warning."
                           ,PTR_DAT_043891f8,&local_28);
      *(undefined4 *)(lVar2 + 0x1c) = 0x34fdd456;
      *(char **)(lVar2 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Core/hkReflectType.cpp";
      *(undefined8 *)(lVar2 + 0x40) = 0x5a;
      FUN_03326adc(auStack_178);
    }
  }
  return;
}


