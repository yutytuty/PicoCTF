fn main() {
    // let avalible = "`1234567890-=qwertyuiop[]asdfghjkl;'\\zxcvbnm,./!@#$%^&*()_+{}:\"<>?|QWERTYUIOPASDFGHJKLZXCVBNM";
    // // let avalible = "1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";

    // let mut i = 0;
    // for c1 in avalible.chars() {
    //     for c2 in avalible.chars() {
    //         for c3 in avalible.chars() {
    //             for c4 in avalible.chars() {
    //                 let digest = md5::compute(format!("{c1}{c2}{c3}{c4}GpLaMjEW").as_bytes());
    //                 if digest[8] == 0x48 && digest[9] == 0x89 && digest[11] == 0x48 {
    //                     if digest[10] == 0xFE {
    //                         println!("1 {}:{c1} {c2} {c3} {c4}", digest[10] - 0xF8);
    //                     }
    //                 }

    //                 let digest = md5::compute(format!("{c1}{c2}{c3}{c4}Mvcezxls").as_bytes());
    //                 if digest[1] == 0x00 && digest[2] == 0xFF && digest[4] == 0xC3 {
    //                     if digest[3] == 0xD6 {
    //                         println!("4 {}:{c1} {c2} {c3} {c4}", digest[3] - 0xD0);
    //                     }
    //                 }
    //                 i += 1;
    //                 if i % 1000000 == 0 {
    //                     println!("{i}");
    //                 }
    //             }
    //         }
    //     }
    // }
    for i in 33..127u8 {
        print!("{} ", i as char);
    }
}
